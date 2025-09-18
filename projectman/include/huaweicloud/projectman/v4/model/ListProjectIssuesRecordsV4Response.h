
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIssuesRecordsV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIssuesRecordsV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueAttrHistoryRecord.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectIssuesRecordsV4Response
    : public ModelBase, public HttpResponse
{
public:
    ListProjectIssuesRecordsV4Response();
    virtual ~ListProjectIssuesRecordsV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectIssuesRecordsV4Response members

    /// <summary>
    /// 历史记录
    /// </summary>

    std::vector<IssueAttrHistoryRecord>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<IssueAttrHistoryRecord>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<IssueAttrHistoryRecord> records_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIssuesRecordsV4Response_H_
