
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasePageInfoReview_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasePageInfoReview_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cloudtest/v1/model/Review.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BasePageInfoReview
    : public ModelBase
{
public:
    BasePageInfoReview();
    virtual ~BasePageInfoReview();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BasePageInfoReview members

    /// <summary>
    /// 
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Review>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<Review>& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getPages() const;
    bool pagesIsSet() const;
    void unsetpages();
    void setPages(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    int64_t total_;
    bool totalIsSet_;
    std::vector<Review> list_;
    bool listIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t pages_;
    bool pagesIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasePageInfoReview_H_
