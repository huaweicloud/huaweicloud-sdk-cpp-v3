
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateAssetCategoryResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateAssetCategoryResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateAssetCategoryResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateAssetCategoryResponse();
    virtual ~UpdateAssetCategoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAssetCategoryResponse members

    /// <summary>
    /// 媒资分类名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 父分类ID。 一级分类父ID为0。
    /// </summary>

    int32_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(int32_t value);

    /// <summary>
    /// 媒资分类ID。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 媒资分类层级。  取值如下： - 1：一级分类层级。 - 2：二级分类层级。 - 3：三级分类层级。
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// 项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t parentId_;
    bool parentIdIsSet_;
    int32_t id_;
    bool idIsSet_;
    int32_t level_;
    bool levelIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateAssetCategoryResponse_H_
