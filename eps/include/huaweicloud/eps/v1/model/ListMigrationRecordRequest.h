
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ListMigrationRecordRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ListMigrationRecordRequest_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ListMigrationRecordRequest
    : public ModelBase
{
public:
    ListMigrationRecordRequest();
    virtual ~ListMigrationRecordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMigrationRecordRequest members

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 索引位置，从offset指定的下一条数据开始查询
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 查询记录数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMigrationRecordRequest& dereference_from_shared_ptr(std::shared_ptr<ListMigrationRecordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ListMigrationRecordRequest_H_
