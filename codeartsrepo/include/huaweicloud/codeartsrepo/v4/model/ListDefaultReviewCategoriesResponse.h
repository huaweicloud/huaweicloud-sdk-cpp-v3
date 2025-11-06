
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListDefaultReviewCategoriesResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListDefaultReviewCategoriesResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/CategoryDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListDefaultReviewCategoriesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDefaultReviewCategoriesResponse();
    virtual ~ListDefaultReviewCategoriesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDefaultReviewCategoriesResponse members

    /// <summary>
    /// **参数解释：** 检视意见分类(所有可勾选的，需传参with_default_review_categories: true才返回)。
    /// </summary>

    std::vector<CategoryDto>& getCodehubDefaultCategories();
    bool codehubDefaultCategoriesIsSet() const;
    void unsetcodehubDefaultCategories();
    void setCodehubDefaultCategories(const std::vector<CategoryDto>& value);

    /// <summary>
    /// **参数解释：** 系统预置检视意见分类(需传参with_default_review_categories: true才返回)。
    /// </summary>

    std::vector<CategoryDto>& getHicodeDefaultCategories();
    bool hicodeDefaultCategoriesIsSet() const;
    void unsethicodeDefaultCategories();
    void setHicodeDefaultCategories(const std::vector<CategoryDto>& value);


protected:
    std::vector<CategoryDto> codehubDefaultCategories_;
    bool codehubDefaultCategoriesIsSet_;
    std::vector<CategoryDto> hicodeDefaultCategories_;
    bool hicodeDefaultCategoriesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListDefaultReviewCategoriesResponse_H_
