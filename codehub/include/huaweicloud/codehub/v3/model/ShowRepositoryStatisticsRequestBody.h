
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowRepositoryStatisticsRequestBody_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowRepositoryStatisticsRequestBody_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ShowRepositoryStatisticsRequestBody
    : public ModelBase
{
public:
    ShowRepositoryStatisticsRequestBody();
    virtual ~ShowRepositoryStatisticsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryStatisticsRequestBody members

    /// <summary>
    /// 仓库分支名
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);


protected:
    std::string branchName_;
    bool branchNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ShowRepositoryStatisticsRequestBody_H_
