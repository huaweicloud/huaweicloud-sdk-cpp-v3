
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_QueryCategoryInfoRsp_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_QueryCategoryInfoRsp_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/vod/v1/model/CategoryInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  QueryCategoryInfoRsp
    : public ModelBase
{
public:
    QueryCategoryInfoRsp();
    virtual ~QueryCategoryInfoRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCategoryInfoRsp members

    /// <summary>
    /// 查询的分类ID，-1表示默认的其他分类 
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 查询的分类名称 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 子层分类信息 
    /// </summary>

    std::vector<CategoryInfo>& getSubCategories();
    bool subCategoriesIsSet() const;
    void unsetsubCategories();
    void setSubCategories(const std::vector<CategoryInfo>& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<CategoryInfo> subCategories_;
    bool subCategoriesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_QueryCategoryInfoRsp_H_
