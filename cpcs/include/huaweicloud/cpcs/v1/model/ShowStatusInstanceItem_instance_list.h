
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusInstanceItem_instance_list_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusInstanceItem_instance_list_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowStatusInstanceItem_instance_list
    : public ModelBase
{
public:
    ShowStatusInstanceItem_instance_list();
    virtual ~ShowStatusInstanceItem_instance_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStatusInstanceItem_instance_list members

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 采集值
    /// </summary>

    int32_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int32_t value);


protected:
    std::string instanceName_;
    bool instanceNameIsSet_;
    int32_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowStatusInstanceItem_instance_list_H_
