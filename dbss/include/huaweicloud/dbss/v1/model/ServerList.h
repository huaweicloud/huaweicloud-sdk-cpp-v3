
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ServerList_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ServerList_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ResponseServer.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 服务列表
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ServerList
    : public ModelBase
{
public:
    ServerList();
    virtual ~ServerList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerList members

    /// <summary>
    /// server列表
    /// </summary>

    std::vector<ResponseServer>& getServer();
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const std::vector<ResponseServer>& value);

    /// <summary>
    /// 数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<ResponseServer> server_;
    bool serverIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ServerList_H_
