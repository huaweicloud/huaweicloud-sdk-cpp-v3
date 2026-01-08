
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListCategoryInfoRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListCategoryInfoRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListCategoryInfoRequest
    : public ModelBase
{
public:
    ListCategoryInfoRequest();
    virtual ~ListCategoryInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCategoryInfoRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 视频分类ID，最多支持10个，传0表示查询所有一级分类
    /// </summary>

    std::vector<int32_t>& getId();
    bool idIsSet() const;
    void unsetid();
    void setId(std::vector<int32_t> value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::vector<int32_t> id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCategoryInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ListCategoryInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListCategoryInfoRequest_H_
