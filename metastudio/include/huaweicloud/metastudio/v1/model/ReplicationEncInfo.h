
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReplicationEncInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReplicationEncInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 加密信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ReplicationEncInfo
    : public ModelBase
{
public:
    ReplicationEncInfo();
    virtual ~ReplicationEncInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplicationEncInfo members

    /// <summary>
    /// 加密算法
    /// </summary>

    std::string getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const std::string& value);

    /// <summary>
    /// 秘钥id
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 初始化向量
    /// </summary>

    std::string getIv() const;
    bool ivIsSet() const;
    void unsetiv();
    void setIv(const std::string& value);


protected:
    std::string algorithm_;
    bool algorithmIsSet_;
    std::string keyId_;
    bool keyIdIsSet_;
    std::string iv_;
    bool ivIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReplicationEncInfo_H_
