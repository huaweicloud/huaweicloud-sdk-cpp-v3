
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateServiceSetRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateServiceSetRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/UpdateServiceSetUsingPUTRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateServiceSetRequest
    : public ModelBase
{
public:
    UpdateServiceSetRequest();
    virtual ~UpdateServiceSetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServiceSetRequest members

    /// <summary>
    /// 服务组id，可通过[获取服务组列表接口](ListServiceSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);

    /// <summary>
    /// 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取，用户未开启企业项目时为0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 防火墙id，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateServiceSetUsingPUTRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateServiceSetUsingPUTRequestBody& value);


protected:
    std::string setId_;
    bool setIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    UpdateServiceSetUsingPUTRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateServiceSetRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateServiceSetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateServiceSetRequest_H_
