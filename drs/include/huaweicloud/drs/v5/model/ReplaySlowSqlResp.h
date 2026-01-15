
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySlowSqlResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySlowSqlResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回放慢SQL数据结果对象
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplaySlowSqlResp
    : public ModelBase
{
public:
    ReplaySlowSqlResp();
    virtual ~ReplaySlowSqlResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplaySlowSqlResp members

    /// <summary>
    /// SQL语句类型 取值：SELECT, INSERT, DELETE, UPDATE, DDL
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// SQL语句
    /// </summary>

    std::string getSlowSql() const;
    bool slowSqlIsSet() const;
    void unsetslowSql();
    void setSlowSql(const std::string& value);

    /// <summary>
    /// 源库执行耗时
    /// </summary>

    std::string getOldTime() const;
    bool oldTimeIsSet() const;
    void unsetoldTime();
    void setOldTime(const std::string& value);

    /// <summary>
    /// 目标库回放执行耗时
    /// </summary>

    std::string getReplayTime() const;
    bool replayTimeIsSet() const;
    void unsetreplayTime();
    void setReplayTime(const std::string& value);


protected:
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string slowSql_;
    bool slowSqlIsSet_;
    std::string oldTime_;
    bool oldTimeIsSet_;
    std::string replayTime_;
    bool replayTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySlowSqlResp_H_
