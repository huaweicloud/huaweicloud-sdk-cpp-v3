

#include "huaweicloud/cfw/v1/model/AccessTopVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AccessTopVO::AccessTopVO()
{
    denyCount_ = 0L;
    denyCountIsSet_ = false;
    denyTopOneAclId_ = "";
    denyTopOneAclIdIsSet_ = false;
    denyTopOneAclName_ = "";
    denyTopOneAclNameIsSet_ = false;
    hitCount_ = 0L;
    hitCountIsSet_ = false;
    in2outDenyDstIpListIsSet_ = false;
    in2outDenyDstPortListIsSet_ = false;
    in2outDenyDstRegionListIsSet_ = false;
    in2outDenySrcIpListIsSet_ = false;
    out2inDenyDstIpListIsSet_ = false;
    out2inDenyDstPortListIsSet_ = false;
    out2inDenySrcIpListIsSet_ = false;
    out2inDenySrcPortListIsSet_ = false;
    out2inDenySrcRegionListIsSet_ = false;
    permitCount_ = 0L;
    permitCountIsSet_ = false;
    permitTopOneAclId_ = "";
    permitTopOneAclIdIsSet_ = false;
    permitTopOneAclName_ = "";
    permitTopOneAclNameIsSet_ = false;
    recordsIsSet_ = false;
    topDenyRuleListIsSet_ = false;
}

AccessTopVO::~AccessTopVO() = default;

void AccessTopVO::validate()
{
}

web::json::value AccessTopVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(denyCountIsSet_) {
        val[utility::conversions::to_string_t("deny_count")] = ModelBase::toJson(denyCount_);
    }
    if(denyTopOneAclIdIsSet_) {
        val[utility::conversions::to_string_t("deny_top_one_acl_id")] = ModelBase::toJson(denyTopOneAclId_);
    }
    if(denyTopOneAclNameIsSet_) {
        val[utility::conversions::to_string_t("deny_top_one_acl_name")] = ModelBase::toJson(denyTopOneAclName_);
    }
    if(hitCountIsSet_) {
        val[utility::conversions::to_string_t("hit_count")] = ModelBase::toJson(hitCount_);
    }
    if(in2outDenyDstIpListIsSet_) {
        val[utility::conversions::to_string_t("in2out_deny_dst_ip_list")] = ModelBase::toJson(in2outDenyDstIpList_);
    }
    if(in2outDenyDstPortListIsSet_) {
        val[utility::conversions::to_string_t("in2out_deny_dst_port_list")] = ModelBase::toJson(in2outDenyDstPortList_);
    }
    if(in2outDenyDstRegionListIsSet_) {
        val[utility::conversions::to_string_t("in2out_deny_dst_region_list")] = ModelBase::toJson(in2outDenyDstRegionList_);
    }
    if(in2outDenySrcIpListIsSet_) {
        val[utility::conversions::to_string_t("in2out_deny_src_ip_list")] = ModelBase::toJson(in2outDenySrcIpList_);
    }
    if(out2inDenyDstIpListIsSet_) {
        val[utility::conversions::to_string_t("out2in_deny_dst_ip_list")] = ModelBase::toJson(out2inDenyDstIpList_);
    }
    if(out2inDenyDstPortListIsSet_) {
        val[utility::conversions::to_string_t("out2in_deny_dst_port_list")] = ModelBase::toJson(out2inDenyDstPortList_);
    }
    if(out2inDenySrcIpListIsSet_) {
        val[utility::conversions::to_string_t("out2in_deny_src_ip_list")] = ModelBase::toJson(out2inDenySrcIpList_);
    }
    if(out2inDenySrcPortListIsSet_) {
        val[utility::conversions::to_string_t("out2in_deny_src_port_list")] = ModelBase::toJson(out2inDenySrcPortList_);
    }
    if(out2inDenySrcRegionListIsSet_) {
        val[utility::conversions::to_string_t("out2in_deny_src_region_list")] = ModelBase::toJson(out2inDenySrcRegionList_);
    }
    if(permitCountIsSet_) {
        val[utility::conversions::to_string_t("permit_count")] = ModelBase::toJson(permitCount_);
    }
    if(permitTopOneAclIdIsSet_) {
        val[utility::conversions::to_string_t("permit_top_one_acl_id")] = ModelBase::toJson(permitTopOneAclId_);
    }
    if(permitTopOneAclNameIsSet_) {
        val[utility::conversions::to_string_t("permit_top_one_acl_name")] = ModelBase::toJson(permitTopOneAclName_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(topDenyRuleListIsSet_) {
        val[utility::conversions::to_string_t("top_deny_rule_list")] = ModelBase::toJson(topDenyRuleList_);
    }

    return val;
}
bool AccessTopVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deny_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDenyCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deny_top_one_acl_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny_top_one_acl_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDenyTopOneAclId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deny_top_one_acl_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny_top_one_acl_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDenyTopOneAclName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hit_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in2out_deny_dst_ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in2out_deny_dst_ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopMemberVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIn2outDenyDstIpList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in2out_deny_dst_port_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in2out_deny_dst_port_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopMemberVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIn2outDenyDstPortList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in2out_deny_dst_region_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in2out_deny_dst_region_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopMemberVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIn2outDenyDstRegionList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in2out_deny_src_ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in2out_deny_src_ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopMemberVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIn2outDenySrcIpList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out2in_deny_dst_ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out2in_deny_dst_ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopMemberVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOut2inDenyDstIpList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out2in_deny_dst_port_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out2in_deny_dst_port_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopMemberVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOut2inDenyDstPortList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out2in_deny_src_ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out2in_deny_src_ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopMemberVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOut2inDenySrcIpList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out2in_deny_src_port_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out2in_deny_src_port_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopMemberVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOut2inDenySrcPortList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out2in_deny_src_region_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out2in_deny_src_region_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopMemberVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOut2inDenySrcRegionList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permit_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permit_top_one_acl_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permit_top_one_acl_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermitTopOneAclId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permit_top_one_acl_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permit_top_one_acl_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermitTopOneAclName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopStatisticsVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_deny_rule_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_deny_rule_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessTopMemberVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopDenyRuleList(refVal);
        }
    }
    return ok;
}


int64_t AccessTopVO::getDenyCount() const
{
    return denyCount_;
}

void AccessTopVO::setDenyCount(int64_t value)
{
    denyCount_ = value;
    denyCountIsSet_ = true;
}

bool AccessTopVO::denyCountIsSet() const
{
    return denyCountIsSet_;
}

void AccessTopVO::unsetdenyCount()
{
    denyCountIsSet_ = false;
}

std::string AccessTopVO::getDenyTopOneAclId() const
{
    return denyTopOneAclId_;
}

void AccessTopVO::setDenyTopOneAclId(const std::string& value)
{
    denyTopOneAclId_ = value;
    denyTopOneAclIdIsSet_ = true;
}

bool AccessTopVO::denyTopOneAclIdIsSet() const
{
    return denyTopOneAclIdIsSet_;
}

void AccessTopVO::unsetdenyTopOneAclId()
{
    denyTopOneAclIdIsSet_ = false;
}

std::string AccessTopVO::getDenyTopOneAclName() const
{
    return denyTopOneAclName_;
}

void AccessTopVO::setDenyTopOneAclName(const std::string& value)
{
    denyTopOneAclName_ = value;
    denyTopOneAclNameIsSet_ = true;
}

bool AccessTopVO::denyTopOneAclNameIsSet() const
{
    return denyTopOneAclNameIsSet_;
}

void AccessTopVO::unsetdenyTopOneAclName()
{
    denyTopOneAclNameIsSet_ = false;
}

int64_t AccessTopVO::getHitCount() const
{
    return hitCount_;
}

void AccessTopVO::setHitCount(int64_t value)
{
    hitCount_ = value;
    hitCountIsSet_ = true;
}

bool AccessTopVO::hitCountIsSet() const
{
    return hitCountIsSet_;
}

void AccessTopVO::unsethitCount()
{
    hitCountIsSet_ = false;
}

std::vector<AccessTopMemberVO>& AccessTopVO::getIn2outDenyDstIpList()
{
    return in2outDenyDstIpList_;
}

void AccessTopVO::setIn2outDenyDstIpList(const std::vector<AccessTopMemberVO>& value)
{
    in2outDenyDstIpList_ = value;
    in2outDenyDstIpListIsSet_ = true;
}

bool AccessTopVO::in2outDenyDstIpListIsSet() const
{
    return in2outDenyDstIpListIsSet_;
}

void AccessTopVO::unsetin2outDenyDstIpList()
{
    in2outDenyDstIpListIsSet_ = false;
}

std::vector<AccessTopMemberVO>& AccessTopVO::getIn2outDenyDstPortList()
{
    return in2outDenyDstPortList_;
}

void AccessTopVO::setIn2outDenyDstPortList(const std::vector<AccessTopMemberVO>& value)
{
    in2outDenyDstPortList_ = value;
    in2outDenyDstPortListIsSet_ = true;
}

bool AccessTopVO::in2outDenyDstPortListIsSet() const
{
    return in2outDenyDstPortListIsSet_;
}

void AccessTopVO::unsetin2outDenyDstPortList()
{
    in2outDenyDstPortListIsSet_ = false;
}

std::vector<AccessTopMemberVO>& AccessTopVO::getIn2outDenyDstRegionList()
{
    return in2outDenyDstRegionList_;
}

void AccessTopVO::setIn2outDenyDstRegionList(const std::vector<AccessTopMemberVO>& value)
{
    in2outDenyDstRegionList_ = value;
    in2outDenyDstRegionListIsSet_ = true;
}

bool AccessTopVO::in2outDenyDstRegionListIsSet() const
{
    return in2outDenyDstRegionListIsSet_;
}

void AccessTopVO::unsetin2outDenyDstRegionList()
{
    in2outDenyDstRegionListIsSet_ = false;
}

std::vector<AccessTopMemberVO>& AccessTopVO::getIn2outDenySrcIpList()
{
    return in2outDenySrcIpList_;
}

void AccessTopVO::setIn2outDenySrcIpList(const std::vector<AccessTopMemberVO>& value)
{
    in2outDenySrcIpList_ = value;
    in2outDenySrcIpListIsSet_ = true;
}

bool AccessTopVO::in2outDenySrcIpListIsSet() const
{
    return in2outDenySrcIpListIsSet_;
}

void AccessTopVO::unsetin2outDenySrcIpList()
{
    in2outDenySrcIpListIsSet_ = false;
}

std::vector<AccessTopMemberVO>& AccessTopVO::getOut2inDenyDstIpList()
{
    return out2inDenyDstIpList_;
}

void AccessTopVO::setOut2inDenyDstIpList(const std::vector<AccessTopMemberVO>& value)
{
    out2inDenyDstIpList_ = value;
    out2inDenyDstIpListIsSet_ = true;
}

bool AccessTopVO::out2inDenyDstIpListIsSet() const
{
    return out2inDenyDstIpListIsSet_;
}

void AccessTopVO::unsetout2inDenyDstIpList()
{
    out2inDenyDstIpListIsSet_ = false;
}

std::vector<AccessTopMemberVO>& AccessTopVO::getOut2inDenyDstPortList()
{
    return out2inDenyDstPortList_;
}

void AccessTopVO::setOut2inDenyDstPortList(const std::vector<AccessTopMemberVO>& value)
{
    out2inDenyDstPortList_ = value;
    out2inDenyDstPortListIsSet_ = true;
}

bool AccessTopVO::out2inDenyDstPortListIsSet() const
{
    return out2inDenyDstPortListIsSet_;
}

void AccessTopVO::unsetout2inDenyDstPortList()
{
    out2inDenyDstPortListIsSet_ = false;
}

std::vector<AccessTopMemberVO>& AccessTopVO::getOut2inDenySrcIpList()
{
    return out2inDenySrcIpList_;
}

void AccessTopVO::setOut2inDenySrcIpList(const std::vector<AccessTopMemberVO>& value)
{
    out2inDenySrcIpList_ = value;
    out2inDenySrcIpListIsSet_ = true;
}

bool AccessTopVO::out2inDenySrcIpListIsSet() const
{
    return out2inDenySrcIpListIsSet_;
}

void AccessTopVO::unsetout2inDenySrcIpList()
{
    out2inDenySrcIpListIsSet_ = false;
}

std::vector<AccessTopMemberVO>& AccessTopVO::getOut2inDenySrcPortList()
{
    return out2inDenySrcPortList_;
}

void AccessTopVO::setOut2inDenySrcPortList(const std::vector<AccessTopMemberVO>& value)
{
    out2inDenySrcPortList_ = value;
    out2inDenySrcPortListIsSet_ = true;
}

bool AccessTopVO::out2inDenySrcPortListIsSet() const
{
    return out2inDenySrcPortListIsSet_;
}

void AccessTopVO::unsetout2inDenySrcPortList()
{
    out2inDenySrcPortListIsSet_ = false;
}

std::vector<AccessTopMemberVO>& AccessTopVO::getOut2inDenySrcRegionList()
{
    return out2inDenySrcRegionList_;
}

void AccessTopVO::setOut2inDenySrcRegionList(const std::vector<AccessTopMemberVO>& value)
{
    out2inDenySrcRegionList_ = value;
    out2inDenySrcRegionListIsSet_ = true;
}

bool AccessTopVO::out2inDenySrcRegionListIsSet() const
{
    return out2inDenySrcRegionListIsSet_;
}

void AccessTopVO::unsetout2inDenySrcRegionList()
{
    out2inDenySrcRegionListIsSet_ = false;
}

int64_t AccessTopVO::getPermitCount() const
{
    return permitCount_;
}

void AccessTopVO::setPermitCount(int64_t value)
{
    permitCount_ = value;
    permitCountIsSet_ = true;
}

bool AccessTopVO::permitCountIsSet() const
{
    return permitCountIsSet_;
}

void AccessTopVO::unsetpermitCount()
{
    permitCountIsSet_ = false;
}

std::string AccessTopVO::getPermitTopOneAclId() const
{
    return permitTopOneAclId_;
}

void AccessTopVO::setPermitTopOneAclId(const std::string& value)
{
    permitTopOneAclId_ = value;
    permitTopOneAclIdIsSet_ = true;
}

bool AccessTopVO::permitTopOneAclIdIsSet() const
{
    return permitTopOneAclIdIsSet_;
}

void AccessTopVO::unsetpermitTopOneAclId()
{
    permitTopOneAclIdIsSet_ = false;
}

std::string AccessTopVO::getPermitTopOneAclName() const
{
    return permitTopOneAclName_;
}

void AccessTopVO::setPermitTopOneAclName(const std::string& value)
{
    permitTopOneAclName_ = value;
    permitTopOneAclNameIsSet_ = true;
}

bool AccessTopVO::permitTopOneAclNameIsSet() const
{
    return permitTopOneAclNameIsSet_;
}

void AccessTopVO::unsetpermitTopOneAclName()
{
    permitTopOneAclNameIsSet_ = false;
}

std::vector<AccessTopStatisticsVO>& AccessTopVO::getRecords()
{
    return records_;
}

void AccessTopVO::setRecords(const std::vector<AccessTopStatisticsVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool AccessTopVO::recordsIsSet() const
{
    return recordsIsSet_;
}

void AccessTopVO::unsetrecords()
{
    recordsIsSet_ = false;
}

std::vector<AccessTopMemberVO>& AccessTopVO::getTopDenyRuleList()
{
    return topDenyRuleList_;
}

void AccessTopVO::setTopDenyRuleList(const std::vector<AccessTopMemberVO>& value)
{
    topDenyRuleList_ = value;
    topDenyRuleListIsSet_ = true;
}

bool AccessTopVO::topDenyRuleListIsSet() const
{
    return topDenyRuleListIsSet_;
}

void AccessTopVO::unsettopDenyRuleList()
{
    topDenyRuleListIsSet_ = false;
}

}
}
}
}
}


