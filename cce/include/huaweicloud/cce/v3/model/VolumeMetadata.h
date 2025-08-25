
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_VolumeMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_VolumeMetadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云硬盘加密信息，仅在创建节点系统盘或数据盘需加密时须填写。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  VolumeMetadata
    : public ModelBase
{
public:
    VolumeMetadata();
    virtual ~VolumeMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VolumeMetadata members

    /// <summary>
    /// 表示云硬盘加密功能的字段，&#39;0&#39;代表不加密，&#39;1&#39;代表加密。  该字段不存在时，云硬盘默认为不加密。
    /// </summary>

    std::string getSystemEncrypted() const;
    bool systemEncryptedIsSet() const;
    void unsetsystemEncrypted();
    void setSystemEncrypted(const std::string& value);

    /// <summary>
    /// 用户主密钥ID，是metadata中的表示加密功能的字段，与__system__encrypted配合使用。
    /// </summary>

    std::string getSystemCmkid() const;
    bool systemCmkidIsSet() const;
    void unsetsystemCmkid();
    void setSystemCmkid(const std::string& value);


protected:
    std::string systemEncrypted_;
    bool systemEncryptedIsSet_;
    std::string systemCmkid_;
    bool systemCmkidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_VolumeMetadata_H_
