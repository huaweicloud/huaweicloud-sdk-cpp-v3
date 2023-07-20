
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlEngineVersionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlEngineVersionResponse_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/MysqlEngineVersionInfo.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowGaussMySqlEngineVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGaussMySqlEngineVersionResponse();
    virtual ~ShowGaussMySqlEngineVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowGaussMySqlEngineVersionResponse members

    /// <summary>
    /// 数据库版本信息列表
    /// </summary>

    std::vector<MysqlEngineVersionInfo>& getDatastores();
    bool datastoresIsSet() const;
    void unsetdatastores();
    void setDatastores(const std::vector<MysqlEngineVersionInfo>& value);


protected:
    std::vector<MysqlEngineVersionInfo> datastores_;
    bool datastoresIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlEngineVersionResponse_H_
