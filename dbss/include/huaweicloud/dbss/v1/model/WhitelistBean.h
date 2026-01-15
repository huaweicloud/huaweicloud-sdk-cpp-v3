
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_WhitelistBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_WhitelistBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  WhitelistBean
    : public ModelBase
{
public:
    WhitelistBean();
    virtual ~WhitelistBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WhitelistBean members

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTimestampMs() const;
    bool createTimestampMsIsSet() const;
    void unsetcreateTimestampMs();
    void setCreateTimestampMs(int64_t value);

    /// <summary>
    /// 数据库IDs
    /// </summary>

    std::vector<std::string>& getDbIds();
    bool dbIdsIsSet() const;
    void unsetdbIds();
    void setDbIds(const std::vector<std::string>& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);

    /// <summary>
    /// 状态 - true：启用 - false：禁用
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 记录ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// SQL语句
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    int64_t getUpdateTimestampMs() const;
    bool updateTimestampMsIsSet() const;
    void unsetupdateTimestampMs();
    void setUpdateTimestampMs(int64_t value);


protected:
    int64_t createTimestampMs_;
    bool createTimestampMsIsSet_;
    std::vector<std::string> dbIds_;
    bool dbIdsIsSet_;
    std::string desc_;
    bool descIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string sql_;
    bool sqlIsSet_;
    int64_t updateTimestampMs_;
    bool updateTimestampMsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_WhitelistBean_H_
