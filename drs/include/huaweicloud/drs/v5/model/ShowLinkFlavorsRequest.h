
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowLinkFlavorsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowLinkFlavorsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowLinkFlavorsRequest
    : public ModelBase
{
public:
    ShowLinkFlavorsRequest();
    virtual ~ShowLinkFlavorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLinkFlavorsRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 引擎类型。
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 任务场景。取值：     - migration：实时迁移。     - sync：实时同步。     - cloudDataGuard：实时灾备。     - subscription：数据订阅。     - replay：录制回放。     - verify：校验任务。     - cdc：CDC任务。
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 任务方向。取值：     - up：入云 ，灾备场景时对应本云为备。     - down：出云，灾备场景时对应本云为主。     - non-dbs：自建。
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 网络类型。取值：     - eip：公网网络。     - vpc：VPC网络，灾备场景不支持选择VPC网络。     - vpn：VPN、专线网络。
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 任务实例规格类型。取值：     - micro：极小规格。     - small：小规格。     - medium：中规格。     - high：大规格。     - xlarge：超大规格。     - 2xlarge：极大规格。
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// 灾备类型是否双主灾备。说明：     - job_type 是cloudDataGuard时，必填，灾备类型是双主灾备时，is_multi_write取值true, 否则为false。     - job_type 是其他类型时，is_multi_write是非必选参数。
    /// </summary>

    bool isIsMultiWrite() const;
    bool isMultiWriteIsSet() const;
    void unsetisMultiWrite();
    void setIsMultiWrite(bool value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::string nodeType_;
    bool nodeTypeIsSet_;
    bool isMultiWrite_;
    bool isMultiWriteIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowLinkFlavorsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowLinkFlavorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowLinkFlavorsRequest_H_
