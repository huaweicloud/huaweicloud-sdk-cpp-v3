
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SyncStarRocksUsersResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SyncStarRocksUsersResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SyncStarRocksUsersResponse
    : public ModelBase, public HttpResponse
{
public:
    SyncStarRocksUsersResponse();
    virtual ~SyncStarRocksUsersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SyncStarRocksUsersResponse members

    /// <summary>
    /// 开启行列分流是否成功。
    /// </summary>

    std::string getSuccess() const;
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(const std::string& value);


protected:
    std::string success_;
    bool successIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SyncStarRocksUsersResponse_H_
