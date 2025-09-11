
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddWhitelistRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddWhitelistRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ObjWhitelist.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 添加白名单请求体
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AddWhitelistRequest
    : public ModelBase
{
public:
    AddWhitelistRequest();
    virtual ~AddWhitelistRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddWhitelistRequest members

    /// <summary>
    /// SQL白名单列表
    /// </summary>

    std::vector<ObjWhitelist>& getWhitelists();
    bool whitelistsIsSet() const;
    void unsetwhitelists();
    void setWhitelists(const std::vector<ObjWhitelist>& value);


protected:
    std::vector<ObjWhitelist> whitelists_;
    bool whitelistsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AddWhitelistRequest_H_
