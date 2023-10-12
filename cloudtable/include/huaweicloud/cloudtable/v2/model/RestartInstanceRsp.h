
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_RestartInstanceRsp_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_RestartInstanceRsp_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 重启集群返回值
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  RestartInstanceRsp
    : public ModelBase
{
public:
    RestartInstanceRsp();
    virtual ~RestartInstanceRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestartInstanceRsp members

    /// <summary>
    /// 
    /// </summary>

    std::vector<std::string>& getJobId();
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::vector<std::string>& value);


protected:
    std::vector<std::string> jobId_;
    bool jobIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_RestartInstanceRsp_H_
