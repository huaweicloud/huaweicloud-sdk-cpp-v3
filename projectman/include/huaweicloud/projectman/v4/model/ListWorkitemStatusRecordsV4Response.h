
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkitemStatusRecordsV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkitemStatusRecordsV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/WorkitemStatusRecords.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListWorkitemStatusRecordsV4Response
    : public ModelBase, public HttpResponse
{
public:
    ListWorkitemStatusRecordsV4Response();
    virtual ~ListWorkitemStatusRecordsV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkitemStatusRecordsV4Response members

    /// <summary>
    /// 操作历史
    /// </summary>

    std::vector<WorkitemStatusRecords>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<WorkitemStatusRecords>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<WorkitemStatusRecords> records_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkitemStatusRecordsV4Response_H_
