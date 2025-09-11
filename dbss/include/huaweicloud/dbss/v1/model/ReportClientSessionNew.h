
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ReportClientSessionNew_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ReportClientSessionNew_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ReportClientSessionNew
    : public ModelBase
{
public:
    ReportClientSessionNew();
    virtual ~ReportClientSessionNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReportClientSessionNew members

    /// <summary>
    /// 数据库ID
    /// </summary>

    std::string getDbId() const;
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(const std::string& value);

    /// <summary>
    /// 数据库IP
    /// </summary>

    std::string getDbIp() const;
    bool dbIpIsSet() const;
    void unsetdbIp();
    void setDbIp(const std::string& value);

    /// <summary>
    /// 数据库名称
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// SESSION数量
    /// </summary>

    int64_t getSessionNum() const;
    bool sessionNumIsSet() const;
    void unsetsessionNum();
    void setSessionNum(int64_t value);


protected:
    std::string dbId_;
    bool dbIdIsSet_;
    std::string dbIp_;
    bool dbIpIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    int64_t sessionNum_;
    bool sessionNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ReportClientSessionNew_H_
