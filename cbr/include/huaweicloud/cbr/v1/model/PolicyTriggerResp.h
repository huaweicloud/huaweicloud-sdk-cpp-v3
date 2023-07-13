
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyTriggerResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyTriggerResp_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/PolicyTriggerPropertiesResp.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PolicyTriggerResp
    : public ModelBase
{
public:
    PolicyTriggerResp();
    virtual ~PolicyTriggerResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PolicyTriggerResp members

    /// <summary>
    /// 调度器id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 调度器名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyTriggerPropertiesResp getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const PolicyTriggerPropertiesResp& value);

    /// <summary>
    /// 调度器类型,目前只支持 time: 定时调度。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    PolicyTriggerPropertiesResp properties_;
    bool propertiesIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PolicyTriggerResp_H_
