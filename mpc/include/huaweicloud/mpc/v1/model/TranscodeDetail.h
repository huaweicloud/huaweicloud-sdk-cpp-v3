
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_TranscodeDetail_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_TranscodeDetail_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/MultiTaskInfo.h>
#include <huaweicloud/mpc/v1/model/SourceInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  TranscodeDetail
    : public ModelBase
{
public:
    TranscodeDetail();
    virtual ~TranscodeDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TranscodeDetail members

    /// <summary>
    /// 一进多出情况下部分转码失败的情况。 
    /// </summary>

    std::vector<MultiTaskInfo>& getMultitaskInfo();
    bool multitaskInfoIsSet() const;
    void unsetmultitaskInfo();
    void setMultitaskInfo(const std::vector<MultiTaskInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    SourceInfo getInputFile() const;
    bool inputFileIsSet() const;
    void unsetinputFile();
    void setInputFile(const SourceInfo& value);


protected:
    std::vector<MultiTaskInfo> multitaskInfo_;
    bool multitaskInfoIsSet_;
    SourceInfo inputFile_;
    bool inputFileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_TranscodeDetail_H_
