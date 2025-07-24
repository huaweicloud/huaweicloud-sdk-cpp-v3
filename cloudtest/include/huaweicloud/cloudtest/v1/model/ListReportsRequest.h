
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListReportsRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListReportsRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListReportsRequest
    : public ModelBase
{
public:
    ListReportsRequest();
    virtual ~ListReportsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReportsRequest members

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 每页显示的条目数量,最大支持200条
    /// </summary>

    int64_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int64_t value);

    /// <summary>
    /// 页数，page_no大于等于1
    /// </summary>

    int64_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int64_t value);

    /// <summary>
    /// 版本id
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);

    /// <summary>
    /// 报表类型 1：首页用例库， 2：质量报告
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int64_t pageSize_;
    bool pageSizeIsSet_;
    int64_t offset_;
    bool offsetIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;
    int32_t type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListReportsRequest& dereference_from_shared_ptr(std::shared_ptr<ListReportsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListReportsRequest_H_
