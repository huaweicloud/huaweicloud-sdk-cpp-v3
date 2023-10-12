
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_MemberGroupandStream_results_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_MemberGroupandStream_results_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/lts/v2/model/MemberGroupandStream_log_streams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  MemberGroupandStream_results
    : public ModelBase
{
public:
    MemberGroupandStream_results();
    virtual ~MemberGroupandStream_results();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MemberGroupandStream_results members

    /// <summary>
    /// 
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<MemberGroupandStream_log_streams>& getLogStreams();
    bool logStreamsIsSet() const;
    void unsetlogStreams();
    void setLogStreams(const std::vector<MemberGroupandStream_log_streams>& value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::vector<MemberGroupandStream_log_streams> logStreams_;
    bool logStreamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_MemberGroupandStream_results_H_
