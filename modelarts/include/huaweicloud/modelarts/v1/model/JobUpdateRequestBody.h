
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobUpdateRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobUpdateRequestBody_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/JobUpdateRequestBody_metadata.h>
#include <huaweicloud/modelarts/v1/model/JobUpdateRequestBody_spec.h>
#include <huaweicloud/modelarts/v1/model/JobEndpointsReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业的描述、事件通知、作业优先级、允许被抢占等信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobUpdateRequestBody
    : public ModelBase
{
public:
    JobUpdateRequestBody();
    virtual ~JobUpdateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobUpdateRequestBody members

    /// <summary>
    /// 对训练作业的描述，默认为“NULL”，字符串的长度限制为[0, 256]。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobUpdateRequestBody_spec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const JobUpdateRequestBody_spec& value);

    /// <summary>
    /// 
    /// </summary>

    JobEndpointsReq getEndpoints() const;
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const JobEndpointsReq& value);

    /// <summary>
    /// 
    /// </summary>

    JobUpdateRequestBody_metadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const JobUpdateRequestBody_metadata& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    JobUpdateRequestBody_spec spec_;
    bool specIsSet_;
    JobEndpointsReq endpoints_;
    bool endpointsIsSet_;
    JobUpdateRequestBody_metadata metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobUpdateRequestBody_H_
