
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSmallVersionResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSmallVersionResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DatabaseSmallVersion.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSmallVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSmallVersionResponse();
    virtual ~ListSmallVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSmallVersionResponse members

    /// <summary>
    /// 参数解释： 数据库版本信息列表。
    /// </summary>

    std::vector<DatabaseSmallVersion>& getDataStores();
    bool dataStoresIsSet() const;
    void unsetdataStores();
    void setDataStores(const std::vector<DatabaseSmallVersion>& value);

    /// <summary>
    /// 参数解释： 查询总个数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<DatabaseSmallVersion> dataStores_;
    bool dataStoresIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSmallVersionResponse_H_
