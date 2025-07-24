
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowReportRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowReportRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/GenerateReportInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowReportRequest
    : public ModelBase
{
public:
    ShowReportRequest();
    virtual ~ShowReportRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReportRequest members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 分支/计划id
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GenerateReportInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GenerateReportInfo& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    GenerateReportInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowReportRequest& dereference_from_shared_ptr(std::shared_ptr<ShowReportRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowReportRequest_H_
