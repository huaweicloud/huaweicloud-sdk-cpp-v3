
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarRocksDatabaseUserResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarRocksDatabaseUserResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ShowStarRocksDatabaseUsers_user_details.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowStarRocksDatabaseUserResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStarRocksDatabaseUserResponse();
    virtual ~ShowStarRocksDatabaseUserResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStarRocksDatabaseUserResponse members

    /// <summary>
    /// 数据库账户信息。
    /// </summary>

    std::vector<ShowStarRocksDatabaseUsers_user_details>& getUserDetails();
    bool userDetailsIsSet() const;
    void unsetuserDetails();
    void setUserDetails(const std::vector<ShowStarRocksDatabaseUsers_user_details>& value);

    /// <summary>
    /// 数据库账户数量。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ShowStarRocksDatabaseUsers_user_details> userDetails_;
    bool userDetailsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarRocksDatabaseUserResponse_H_
