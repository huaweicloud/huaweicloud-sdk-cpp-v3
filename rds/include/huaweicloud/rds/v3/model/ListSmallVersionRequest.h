
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSmallVersionRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSmallVersionRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSmallVersionRequest
    : public ModelBase
{
public:
    ListSmallVersionRequest();
    virtual ~ListSmallVersionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSmallVersionRequest members

    /// <summary>
    /// 数据库引擎名。 取值范围： 支持的引擎如下，不区分大小写： PostgreSQL
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 数据库版本号。（可输入小版本号）
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 参数解释： 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询。 约束限制：必须为数字，不能为负数。 取值范围：大于等于0的整数。 默认取值：0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 参数解释： 查询记录数。 约束限制：不涉及。 取值范围：默认为100，不能为负数，最小值为1，最大值为100。 默认取值：100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string version_;
    bool versionIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSmallVersionRequest& dereference_from_shared_ptr(std::shared_ptr<ListSmallVersionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSmallVersionRequest_H_
