
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIterationsV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIterationsV4Request_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectIterationsV4Request
    : public ModelBase
{
public:
    ListProjectIterationsV4Request();
    virtual ~ListProjectIterationsV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectIterationsV4Request members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 更新迭代的时间(查询的起始时间,查询的结束时间)
    /// </summary>

    std::string getUpdatedTimeInterval() const;
    bool updatedTimeIntervalIsSet() const;
    void unsetupdatedTimeInterval();
    void setUpdatedTimeInterval(const std::string& value);

    /// <summary>
    /// 是否包含被删除的迭代,默认false不包含被删除的迭代
    /// </summary>

    bool isIncludeDeleted() const;
    bool includeDeletedIsSet() const;
    void unsetincludeDeleted();
    void setIncludeDeleted(bool value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string updatedTimeInterval_;
    bool updatedTimeIntervalIsSet_;
    bool includeDeleted_;
    bool includeDeletedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectIterationsV4Request& dereference_from_shared_ptr(std::shared_ptr<ListProjectIterationsV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectIterationsV4Request_H_
