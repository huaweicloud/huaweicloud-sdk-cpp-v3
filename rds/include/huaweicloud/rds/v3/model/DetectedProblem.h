
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DetectedProblem_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DetectedProblem_H_


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
/// 每项检查项检测到的问题
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DetectedProblem
    : public ModelBase
{
public:
    DetectedProblem();
    virtual ~DetectedProblem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetectedProblem members

    /// <summary>
    /// 存在问题的数据库对象
    /// </summary>

    std::string getDbObject() const;
    bool dbObjectIsSet() const;
    void unsetdbObject();
    void setDbObject(const std::string& value);

    /// <summary>
    /// 告警级别
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 检查项描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string dbObject_;
    bool dbObjectIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DetectedProblem_H_
