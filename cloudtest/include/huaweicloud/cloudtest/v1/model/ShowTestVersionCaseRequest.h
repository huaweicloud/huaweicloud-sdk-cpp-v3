
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestVersionCaseRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestVersionCaseRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowTestVersionCaseRequest
    : public ModelBase
{
public:
    ShowTestVersionCaseRequest();
    virtual ~ShowTestVersionCaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTestVersionCaseRequest members

    /// <summary>
    /// 用例id
    /// </summary>

    std::string getCaseUri() const;
    bool caseUriIsSet() const;
    void unsetcaseUri();
    void setCaseUri(const std::string& value);

    /// <summary>
    /// 分支uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 任务
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 是否刷新缓存
    /// </summary>

    bool isRefresh() const;
    bool refreshIsSet() const;
    void unsetrefresh();
    void setRefresh(bool value);

    /// <summary>
    /// 是否回收站资源
    /// </summary>

    bool isIsRecycle() const;
    bool isRecycleIsSet() const;
    void unsetisRecycle();
    void setIsRecycle(bool value);


protected:
    std::string caseUri_;
    bool caseUriIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    bool refresh_;
    bool refreshIsSet_;
    bool isRecycle_;
    bool isRecycleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTestVersionCaseRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTestVersionCaseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestVersionCaseRequest_H_
