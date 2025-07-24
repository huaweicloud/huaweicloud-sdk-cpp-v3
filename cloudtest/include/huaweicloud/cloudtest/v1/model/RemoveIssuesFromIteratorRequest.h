
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RemoveIssuesFromIteratorRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RemoveIssuesFromIteratorRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/RemoveIssuesInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  RemoveIssuesFromIteratorRequest
    : public ModelBase
{
public:
    RemoveIssuesFromIteratorRequest();
    virtual ~RemoveIssuesFromIteratorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoveIssuesFromIteratorRequest members

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 迭代uri
    /// </summary>

    std::string getIteratorId() const;
    bool iteratorIdIsSet() const;
    void unsetiteratorId();
    void setIteratorId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RemoveIssuesInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RemoveIssuesInfo& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string iteratorId_;
    bool iteratorIdIsSet_;
    RemoveIssuesInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RemoveIssuesFromIteratorRequest& dereference_from_shared_ptr(std::shared_ptr<RemoveIssuesFromIteratorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RemoveIssuesFromIteratorRequest_H_
