
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_HbaseModifySettingV2_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_HbaseModifySettingV2_H_

#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  HbaseModifySettingV2
    : public ModelBase
{
public:
    HbaseModifySettingV2();
    virtual ~HbaseModifySettingV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HbaseModifySettingV2 members

    /// <summary>
    /// 待修改的参数名
    /// </summary>

    std::string getParmName() const;
    bool parmNameIsSet() const;
    void unsetparmName();
    void setParmName(const std::string& value);

    /// <summary>
    /// 设置的参数值
    /// </summary>

    std::string getNewValue() const;
    bool newValueIsSet() const;
    void unsetnewValue();
    void setNewValue(const std::string& value);

    /// <summary>
    /// 参数ID，可不传
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string parmName_;
    bool parmNameIsSet_;
    std::string newValue_;
    bool newValueIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_HbaseModifySettingV2_H_
