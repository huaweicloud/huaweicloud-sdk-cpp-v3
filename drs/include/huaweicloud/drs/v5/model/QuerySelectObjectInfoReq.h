
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QuerySelectObjectInfoReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QuerySelectObjectInfoReq_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库对象采集请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QuerySelectObjectInfoReq
    : public ModelBase
{
public:
    QuerySelectObjectInfoReq();
    virtual ~QuerySelectObjectInfoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QuerySelectObjectInfoReq members

    /// <summary>
    /// 查询指定库的信息。
    /// </summary>

    std::vector<std::string>& getDbNames();
    bool dbNamesIsSet() const;
    void unsetdbNames();
    void setDbNames(const std::vector<std::string>& value);

    /// <summary>
    /// 查询对象信息类型，取值： - source：查询源库对象信息。 - modified：查询已选择的（已同步的和未下发的）对象信息。 - synchronized：查询已同步的（已下发的）对象信息 ， 使用场景在任务处于全量中或者增量中。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 是否强制刷新。取值： - true：是，表示从源库重新查询。 - false：否，表示从已缓存中数据查询。
    /// </summary>

    std::string getIsRefresh() const;
    bool isRefreshIsSet() const;
    void unsetisRefresh();
    void setIsRefresh(const std::string& value);


protected:
    std::vector<std::string> dbNames_;
    bool dbNamesIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string isRefresh_;
    bool isRefreshIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QuerySelectObjectInfoReq_H_
