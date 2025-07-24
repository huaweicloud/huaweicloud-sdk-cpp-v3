
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListOwnTestCasesRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListOwnTestCasesRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListOwnTestCasesRequest
    : public ModelBase
{
public:
    ListOwnTestCasesRequest();
    virtual ~ListOwnTestCasesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOwnTestCasesRequest members

    /// <summary>
    /// 当前页数
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// 排序方式
    /// </summary>

    std::string getSortType() const;
    bool sortTypeIsSet() const;
    void unsetsortType();
    void setSortType(const std::string& value);

    /// <summary>
    /// 关键字查询，用例名或编号
    /// </summary>

    std::string getKeyword() const;
    bool keywordIsSet() const;
    void unsetkeyword();
    void setKeyword(const std::string& value);


protected:
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string sortType_;
    bool sortTypeIsSet_;
    std::string keyword_;
    bool keywordIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListOwnTestCasesRequest& dereference_from_shared_ptr(std::shared_ptr<ListOwnTestCasesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListOwnTestCasesRequest_H_
