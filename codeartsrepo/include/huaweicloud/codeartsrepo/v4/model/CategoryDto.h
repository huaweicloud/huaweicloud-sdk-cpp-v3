
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CategoryDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CategoryDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/CategoryDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CategoryDto
    : public ModelBase
{
public:
    CategoryDto();
    virtual ~CategoryDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CategoryDto members

    /// <summary>
    /// **参数解释：** 检视意见分类key。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见分类中文名。
    /// </summary>

    std::string getNameZh() const;
    bool nameZhIsSet() const;
    void unsetnameZh();
    void setNameZh(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见分类英文名。
    /// </summary>

    std::string getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(const std::string& value);

    /// <summary>
    /// **参数解释：** 子检视意见分类。
    /// </summary>

    std::vector<CategoryDto>& getSubCategories();
    bool subCategoriesIsSet() const;
    void unsetsubCategories();
    void setSubCategories(const std::vector<CategoryDto>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string nameZh_;
    bool nameZhIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    std::vector<CategoryDto>* subCategories_;
    bool subCategoriesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CategoryDto_H_
