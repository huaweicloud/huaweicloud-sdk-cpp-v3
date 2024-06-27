
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseDataBaseParameterResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseDataBaseParameterResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ChDatabaseParameterInfo.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListClickHouseDataBaseParameterResponse
    : public ModelBase, public HttpResponse
{
public:
    ListClickHouseDataBaseParameterResponse();
    virtual ~ListClickHouseDataBaseParameterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListClickHouseDataBaseParameterResponse members

    /// <summary>
    /// 库参数信息。
    /// </summary>

    std::vector<ChDatabaseParameterInfo>& getDbParameters();
    bool dbParametersIsSet() const;
    void unsetdbParameters();
    void setDbParameters(const std::vector<ChDatabaseParameterInfo>& value);


protected:
    std::vector<ChDatabaseParameterInfo> dbParameters_;
    bool dbParametersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseDataBaseParameterResponse_H_
