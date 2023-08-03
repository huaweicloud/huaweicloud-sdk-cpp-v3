
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowLogFileResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowLogFileResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/SlowLogFile.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListSlowLogFileResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSlowLogFileResponse();
    virtual ~ListSlowLogFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSlowLogFileResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<SlowLogFile>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<SlowLogFile>& value);

    /// <summary>
    /// 文件总数。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);


protected:
    std::vector<SlowLogFile> list_;
    bool listIsSet_;
    int64_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListSlowLogFileResponse_H_
