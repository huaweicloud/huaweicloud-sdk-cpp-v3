
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_QueryImageByTagsResourceDetail_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_QueryImageByTagsResourceDetail_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 镜像详情
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  QueryImageByTagsResourceDetail
    : public ModelBase
{
public:
    QueryImageByTagsResourceDetail();
    virtual ~QueryImageByTagsResourceDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryImageByTagsResourceDetail members

    /// <summary>
    /// 镜像状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_QueryImageByTagsResourceDetail_H_
