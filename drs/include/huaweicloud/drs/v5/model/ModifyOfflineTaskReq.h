
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyOfflineTaskReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyOfflineTaskReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改离线迁移任务请求。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ModifyOfflineTaskReq
    : public ModelBase
{
public:
    ModifyOfflineTaskReq();
    virtual ~ModifyOfflineTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyOfflineTaskReq members

    /// <summary>
    /// 备份迁移任务名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备份迁移任务描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyOfflineTaskReq_H_
