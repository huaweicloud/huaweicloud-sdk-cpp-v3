
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashboardGroupReq_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashboardGroupReq_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateDashboardGroupReq
    : public ModelBase
{
public:
    CreateDashboardGroupReq();
    virtual ~CreateDashboardGroupReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDashboardGroupReq members

    /// <summary>
    /// 仪表盘分组名称
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);


protected:
    std::string groupName_;
    bool groupNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateDashboardGroupReq_H_
