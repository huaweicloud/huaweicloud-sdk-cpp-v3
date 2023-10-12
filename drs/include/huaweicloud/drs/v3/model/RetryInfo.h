
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_RetryInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_RetryInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  RetryInfo
    : public ModelBase
{
public:
    RetryInfo();
    virtual ~RetryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RetryInfo members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 再编辑之后启动，必填为true。
    /// </summary>

    bool isIsSyncReEdit() const;
    bool isSyncReEditIsSet() const;
    void unsetisSyncReEdit();
    void setIsSyncReEdit(bool value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    bool isSyncReEdit_;
    bool isSyncReEditIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_RetryInfo_H_
