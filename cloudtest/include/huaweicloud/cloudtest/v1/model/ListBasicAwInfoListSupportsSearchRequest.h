
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListBasicAwInfoListSupportsSearchRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListBasicAwInfoListSupportsSearchRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/SearchRequest.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListBasicAwInfoListSupportsSearchRequest
    : public ModelBase
{
public:
    ListBasicAwInfoListSupportsSearchRequest();
    virtual ~ListBasicAwInfoListSupportsSearchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBasicAwInfoListSupportsSearchRequest members

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 当前页数
    /// </summary>

    std::string getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(const std::string& value);

    /// <summary>
    /// 每页多少记录
    /// </summary>

    std::string getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(const std::string& value);

    /// <summary>
    /// 父目录ID
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SearchRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SearchRequest& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string pageNo_;
    bool pageNoIsSet_;
    std::string pageSize_;
    bool pageSizeIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    SearchRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListBasicAwInfoListSupportsSearchRequest& dereference_from_shared_ptr(std::shared_ptr<ListBasicAwInfoListSupportsSearchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListBasicAwInfoListSupportsSearchRequest_H_
