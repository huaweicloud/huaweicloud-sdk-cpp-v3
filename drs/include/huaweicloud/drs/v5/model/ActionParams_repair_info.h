
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionParams_repair_info_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionParams_repair_info_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ActionParams_repair_info_objects.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据修复信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ActionParams_repair_info
    : public ModelBase
{
public:
    ActionParams_repair_info();
    virtual ~ActionParams_repair_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionParams_repair_info members

    /// <summary>
    /// 对比任务ID。
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);

    /// <summary>
    /// 数据修复对象信息。
    /// </summary>

    std::vector<ActionParams_repair_info_objects>& getObjects();
    bool objectsIsSet() const;
    void unsetobjects();
    void setObjects(const std::vector<ActionParams_repair_info_objects>& value);


protected:
    std::string queryId_;
    bool queryIdIsSet_;
    std::vector<ActionParams_repair_info_objects> objects_;
    bool objectsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ActionParams_repair_info_H_
