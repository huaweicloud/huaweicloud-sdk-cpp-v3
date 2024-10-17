
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ServerIdBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ServerIdBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ServerIdBean
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ServerIdBean
    : public ModelBase
{
public:
    ServerIdBean();
    virtual ~ServerIdBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerIdBean members

    /// <summary>
    /// 实例ID。可在查询实例列表接口的ID字段获取。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ServerIdBean_H_
