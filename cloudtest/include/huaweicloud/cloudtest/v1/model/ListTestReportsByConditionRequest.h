
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestReportsByConditionRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestReportsByConditionRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListTestReportsByConditionRequest
    : public ModelBase
{
public:
    ListTestReportsByConditionRequest();
    virtual ~ListTestReportsByConditionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTestReportsByConditionRequest members

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
    /// 当前页数
    /// </summary>

    std::string getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(const std::string& value);

    /// <summary>
    /// 名称关键词
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 是否是我的测试报告
    /// </summary>

    bool isOwn() const;
    bool ownIsSet() const;
    void unsetown();
    void setOwn(bool value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int64_t pageSize_;
    bool pageSizeIsSet_;
    std::string pageNo_;
    bool pageNoIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    bool own_;
    bool ownIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTestReportsByConditionRequest& dereference_from_shared_ptr(std::shared_ptr<ListTestReportsByConditionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListTestReportsByConditionRequest_H_
