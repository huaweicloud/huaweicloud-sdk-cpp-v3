
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlIncrementalBackupListRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlIncrementalBackupListRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowGaussMySqlIncrementalBackupListRequest
    : public ModelBase
{
public:
    ShowGaussMySqlIncrementalBackupListRequest();
    virtual ~ShowGaussMySqlIncrementalBackupListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGaussMySqlIncrementalBackupListRequest members

    /// <summary>
    /// 请求语言类型。默认en-us。 取值范围： - en-us - zh-cn
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 查询记录数。默认为10，可取范围：10、20、50。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 查询开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。  “begin_time”有值时，“end_time”必选。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 查询结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”，且大于查询开始时间。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。  “end_time”有值时，“begin_time”必选。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否展示跨区域增量备份。  **约束限制**：  不涉及。  **取值范围**：  - true：展示同区域和跨区域增量备份。 - false：仅展示同区域增量备份。  **默认取值**：  false。
    /// </summary>

    bool isDisplayOffsiteBackup() const;
    bool displayOffsiteBackupIsSet() const;
    void unsetdisplayOffsiteBackup();
    void setDisplayOffsiteBackup(bool value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    bool displayOffsiteBackup_;
    bool displayOffsiteBackupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowGaussMySqlIncrementalBackupListRequest& dereference_from_shared_ptr(std::shared_ptr<ShowGaussMySqlIncrementalBackupListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowGaussMySqlIncrementalBackupListRequest_H_
