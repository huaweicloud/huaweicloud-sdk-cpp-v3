
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PageResults_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PageResults_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/VariableRes.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  PageResults
    : public ModelBase
{
public:
    PageResults();
    virtual ~PageResults();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageResults members

    /// <summary>
    /// 
    /// </summary>

    std::vector<VariableRes>& getPageList();
    bool pageListIsSet() const;
    void unsetpageList();
    void setPageList(const std::vector<VariableRes>& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getTotalPage() const;
    bool totalPageIsSet() const;
    void unsettotalPage();
    void setTotalPage(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int64_t getTotalSize() const;
    bool totalSizeIsSet() const;
    void unsettotalSize();
    void setTotalSize(int64_t value);


protected:
    std::vector<VariableRes> pageList_;
    bool pageListIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t totalPage_;
    bool totalPageIsSet_;
    int64_t totalSize_;
    bool totalSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PageResults_H_
