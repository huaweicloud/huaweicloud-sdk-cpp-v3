
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteAccessConfigRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteAccessConfigRequestBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除日志接入请求体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteAccessConfigRequestBody
    : public ModelBase
{
public:
    DeleteAccessConfigRequestBody();
    virtual ~DeleteAccessConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteAccessConfigRequestBody members

    /// <summary>
    /// 日志接入ID列表
    /// </summary>

    std::vector<std::string>& getAccessConfigIdList();
    bool accessConfigIdListIsSet() const;
    void unsetaccessConfigIdList();
    void setAccessConfigIdList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> accessConfigIdList_;
    bool accessConfigIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteAccessConfigRequestBody_H_
