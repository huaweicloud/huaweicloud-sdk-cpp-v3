
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateCategoryReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateCategoryReq_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CreateCategoryReq
    : public ModelBase
{
public:
    CreateCategoryReq();
    virtual ~CreateCategoryReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateCategoryReq members

    /// <summary>
    /// 媒资分类名称，最大64字节。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 父分类ID。  若不填，则默认生成一级分类。  根节点分类ID为0。
    /// </summary>

    int32_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t parentId_;
    bool parentIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateCategoryReq_H_
