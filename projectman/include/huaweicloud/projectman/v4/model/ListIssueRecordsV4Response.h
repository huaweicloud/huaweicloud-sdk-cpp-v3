
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueRecordsV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueRecordsV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueRecordV4.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueRecordsV4Response
    : public ModelBase, public HttpResponse
{
public:
    ListIssueRecordsV4Response();
    virtual ~ListIssueRecordsV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueRecordsV4Response members

    /// <summary>
    /// 操作记录id (已废弃)
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 创建时间 (已废弃)
    /// </summary>

    int64_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<IssueRecordV4>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<IssueRecordV4>& value);

    /// <summary>
    /// 操作记录总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    int64_t createdTime_;
    bool createdTimeIsSet_;
    std::vector<IssueRecordV4> records_;
    bool recordsIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueRecordsV4Response_H_
