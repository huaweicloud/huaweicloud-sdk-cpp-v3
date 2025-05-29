
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecyclingJobRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecyclingJobRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListRecyclingJobRequest
    : public ModelBase
{
public:
    ListRecyclingJobRequest();
    virtual ~ListRecyclingJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRecyclingJobRequest members

    /// <summary>
    /// 每页显示的条目数量，page_size小于等于100
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 分页页码， 表示从此页开始查询， page_no大于等于1
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 搜索的任务名称
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);


protected:
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    std::string search_;
    bool searchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRecyclingJobRequest& dereference_from_shared_ptr(std::shared_ptr<ListRecyclingJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecyclingJobRequest_H_
